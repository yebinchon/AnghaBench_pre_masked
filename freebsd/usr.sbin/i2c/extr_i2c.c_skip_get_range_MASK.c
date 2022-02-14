
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skip_range {void* end; void* start; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char**,char*) ;
 void* FUNC_2 (char*,int ,int) ;

__attribute__((used)) static struct skip_range
FUNC_3(char *VAR_0)
{
 struct skip_range VAR_1;
 char *VAR_2;

 VAR_1.start = 0;
 VAR_1.end = 0;

 VAR_2 = FUNC_1(&VAR_0, "..");
 if (VAR_2) {
  VAR_1.start = FUNC_2(VAR_2, 0, 16);
  VAR_2 = FUNC_1(&VAR_0, "..");
  if ((VAR_2 != ((void*)0)) && !FUNC_0(VAR_2)) {
   VAR_2 = FUNC_1(&VAR_0, "..");
   if (VAR_2)
    VAR_1.end = FUNC_2(VAR_2, 0, 16);
  }
 }

 return (VAR_1);
}
