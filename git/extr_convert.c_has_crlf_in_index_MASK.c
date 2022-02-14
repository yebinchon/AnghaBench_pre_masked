
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct index_state {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (void*) ;
 unsigned int FUNC_1 (void*,unsigned long) ;
 char* FUNC_2 (void*,char,unsigned long) ;
 void* FUNC_3 (struct index_state const*,char const*,unsigned long*) ;

__attribute__((used)) static int FUNC_4(const struct index_state *VAR_2, const char *VAR_3)
{
 unsigned long VAR_4;
 void *VAR_5;
 const char *VAR_6;
 int VAR_7 = 0;

 VAR_5 = FUNC_3(VAR_2, VAR_3, &VAR_4);
 if (!VAR_5)
  return 0;

 VAR_6 = FUNC_2(VAR_5, '\r', VAR_4);
 if (VAR_6) {
  unsigned int VAR_8;
  VAR_8 = FUNC_1(VAR_5, VAR_4);
  if (!(VAR_8 & VAR_0) &&
      (VAR_8 & VAR_1))
   VAR_7 = 1;
 }
 FUNC_0(VAR_5);
 return VAR_7;
}
