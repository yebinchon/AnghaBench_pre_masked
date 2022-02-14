
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;
typedef int hdr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct object_id*) ;
 scalar_t__ FUNC_1 (struct object_id*) ;
 int FUNC_2 (struct object_id*,char*,int,void const*,unsigned long,int ) ;
 int FUNC_3 (void const*,unsigned long,char const*,struct object_id*,char*,int*) ;

int FUNC_4(const void *VAR_1, unsigned long VAR_2, const char *VAR_3,
        struct object_id *VAR_4)
{
 char VAR_5[VAR_0];
 int VAR_6 = sizeof(VAR_5);




 FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, &VAR_6);
 if (FUNC_1(VAR_4) || FUNC_0(VAR_4))
  return 0;
 return FUNC_2(VAR_4, VAR_5, VAR_6, VAR_1, VAR_2, 0);
}
