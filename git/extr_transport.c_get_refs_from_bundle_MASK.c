
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct transport {int url; struct bundle_transport_data* data; } ;
struct ref_list_entry {int oid; int name; } ;
struct ref {struct ref* next; int old_oid; } ;
struct TYPE_3__ {int nr; struct ref_list_entry* list; } ;
struct TYPE_4__ {TYPE_1__ references; } ;
struct bundle_transport_data {int get_refs_from_bundle_called; scalar_t__ fd; TYPE_2__ header; } ;
struct argv_array {int dummy; } ;


 int FUNC_0 (char*) ;
 struct ref* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*) ;

__attribute__((used)) static struct ref *FUNC_6(struct transport *VAR_0,
     int VAR_1,
     const struct argv_array *VAR_2)
{
 struct bundle_transport_data *VAR_3 = VAR_0->data;
 struct ref *VAR_4 = ((void*)0);
 int VAR_5;

 if (VAR_1)
  return ((void*)0);

 VAR_3->get_refs_from_bundle_called = 1;

 if (VAR_3->fd > 0)
  FUNC_2(VAR_3->fd);
 VAR_3->fd = FUNC_5(VAR_0->url, &VAR_3->header);
 if (VAR_3->fd < 0)
  FUNC_3(FUNC_0("could not read bundle '%s'"), VAR_0->url);
 for (VAR_5 = 0; VAR_5 < VAR_3->header.references.nr; VAR_5++) {
  struct ref_list_entry *VAR_6 = VAR_3->header.references.list + VAR_5;
  struct ref *VAR_7 = FUNC_1(VAR_6->name);
  FUNC_4(&VAR_7->old_oid, &VAR_6->oid);
  VAR_7->next = VAR_4;
  VAR_4 = VAR_7;
 }
 return VAR_4;
}
