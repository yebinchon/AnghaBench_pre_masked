
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {scalar_t__ progress; struct bundle_transport_data* data; } ;
struct ref {int dummy; } ;
struct bundle_transport_data {int fd; int header; int get_refs_from_bundle_called; } ;


 int VAR_0 ;
 int FUNC_0 (struct transport*,int ,int *) ;
 int VAR_1 ;
 int FUNC_1 (int ,int *,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct transport *VAR_2,
          int VAR_3, struct ref **VAR_4)
{
 struct bundle_transport_data *VAR_5 = VAR_2->data;

 if (!VAR_5->get_refs_from_bundle_called)
  FUNC_0(VAR_2, 0, ((void*)0));
 return FUNC_1(VAR_1, &VAR_5->header, VAR_5->fd,
   VAR_2->progress ? VAR_0 : 0);
}
