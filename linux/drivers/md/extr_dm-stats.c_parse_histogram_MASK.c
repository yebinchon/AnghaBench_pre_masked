
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long long* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (char const*,char*,unsigned long long*,char*) ;
 char* FUNC_2 (char const*,char) ;

__attribute__((used)) static int FUNC_3(const char *VAR_3, unsigned *VAR_4,
      unsigned long long **VAR_5)
{
 const char *VAR_6;
 unsigned VAR_7;
 unsigned long long VAR_8;

 *VAR_4 = 1;
 for (VAR_6 = VAR_3; *VAR_6; VAR_6++)
  if (*VAR_6 == ',')
   (*VAR_4)++;

 *VAR_5 = FUNC_0(*VAR_4,
           sizeof(unsigned long long),
           VAR_2);
 if (!*VAR_5)
  return -VAR_1;

 VAR_7 = 0;
 VAR_8 = 0;
 while (1) {
  unsigned long long VAR_9;
  int VAR_10;
  char VAR_11;
  VAR_10 = FUNC_1(VAR_3, "%llu%c", &VAR_9, &VAR_11);
  if (!VAR_10 || (VAR_10 == 2 && VAR_11 != ','))
   return -VAR_0;
  if (VAR_9 <= VAR_8)
   return -VAR_0;
  VAR_8 = VAR_9;
  (*VAR_5)[VAR_7] = VAR_9;
  if (VAR_10 == 1)
   return 0;
  VAR_3 = FUNC_2(VAR_3, ',') + 1;
  VAR_7++;
 }
}
