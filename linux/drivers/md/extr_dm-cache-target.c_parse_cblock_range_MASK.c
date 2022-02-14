
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct cblock_range {void* begin; void* end; } ;
struct cache {int dummy; } ;


 int FUNC_0 (char*,int ,char const*) ;
 int VAR_0 ;
 int FUNC_1 (struct cache*) ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (char const*,char*,scalar_t__*,char*,...) ;
 void* FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct cache *VAR_1, const char *VAR_2,
         struct cblock_range *VAR_3)
{
 char VAR_4;
 uint64_t VAR_5, VAR_6;
 int VAR_7;




 VAR_7 = FUNC_3(VAR_2, "%llu-%llu%c", &VAR_5, &VAR_6, &VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_7 == 2) {
  VAR_3->begin = FUNC_4(VAR_5);
  VAR_3->end = FUNC_4(VAR_6);
  return 0;
 }




 VAR_7 = FUNC_3(VAR_2, "%llu%c", &VAR_5, &VAR_4);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_7 == 1) {
  VAR_3->begin = FUNC_4(VAR_5);
  VAR_3->end = FUNC_4(FUNC_2(VAR_3->begin) + 1u);
  return 0;
 }

 FUNC_0("%s: invalid cblock range '%s'", FUNC_1(VAR_1), VAR_2);
 return -VAR_0;
}
