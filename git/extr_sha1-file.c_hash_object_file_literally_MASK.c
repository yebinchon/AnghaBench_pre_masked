
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct object_id {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct object_id*) ;
 scalar_t__ FUNC_2 (struct object_id*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (struct object_id*,char*,int,void const*,unsigned long,int ) ;
 int FUNC_5 (void const*,unsigned long,char const*,struct object_id*,char*,int*) ;
 char* FUNC_6 (int) ;

int FUNC_7(const void *VAR_2, unsigned long VAR_3,
          const char *VAR_4, struct object_id *VAR_5,
          unsigned VAR_6)
{
 char *VAR_7;
 int VAR_8, VAR_9 = 0;


 VAR_8 = FUNC_3(VAR_4) + VAR_1;
 VAR_7 = FUNC_6(VAR_8);
 FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5, VAR_7, &VAR_8);

 if (!(VAR_6 & VAR_0))
  goto cleanup;
 if (FUNC_2(VAR_5) || FUNC_1(VAR_5))
  goto cleanup;
 VAR_9 = FUNC_4(VAR_5, VAR_7, VAR_8, VAR_2, VAR_3, 0);

cleanup:
 FUNC_0(VAR_7);
 return VAR_9;
}
