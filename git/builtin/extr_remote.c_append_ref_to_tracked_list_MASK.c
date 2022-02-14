
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct refspec_item {char* dst; int src; } ;
struct ref_states {int tracked; int remote; } ;
struct object_id {int dummy; } ;
typedef int refspec ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct refspec_item*,int ,int) ;
 int FUNC_2 (int ,struct refspec_item*) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1,
 const struct object_id *VAR_2, int VAR_3, void *VAR_4)
{
 struct ref_states *VAR_5 = VAR_4;
 struct refspec_item VAR_6;

 if (VAR_3 & VAR_0)
  return 0;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.dst = (char *)VAR_1;
 if (!FUNC_2(VAR_5->remote, &VAR_6))
  FUNC_3(&VAR_5->tracked, FUNC_0(VAR_6.src));

 return 0;
}
