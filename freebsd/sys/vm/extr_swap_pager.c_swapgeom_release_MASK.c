
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swdevt {int * sw_id; } ;
struct g_consumer {scalar_t__ index; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,struct g_consumer*,int ,int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_2(struct g_consumer *VAR_4, struct swdevt *VAR_5)
{

 FUNC_1(&VAR_2, VAR_0);
 VAR_4->index--;
 if (VAR_4->index == 0) {
  if (FUNC_0(VAR_3, VAR_4, VAR_1, ((void*)0)) == 0)
   VAR_5->sw_id = ((void*)0);
 }
}
