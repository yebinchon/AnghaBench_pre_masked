
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathspec {int magic; } ;
struct index_state {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct index_state const*,struct pathspec const*,char const*,int,int,char*,unsigned int) ;

int FUNC_1(const struct index_state *VAR_3,
     const struct pathspec *VAR_4,
     const char *VAR_5, int VAR_6,
     int VAR_7, char *VAR_8, int VAR_9)
{
 int VAR_10, VAR_11;
 unsigned VAR_12 = VAR_9 ? VAR_0 : 0;
 VAR_10 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7, VAR_8, VAR_12);
 if (!(VAR_4->magic & VAR_2) || !VAR_10)
  return VAR_10;
 VAR_11 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6,
         VAR_7, VAR_8,
         VAR_12 | VAR_1);
 return VAR_11 ? 0 : VAR_10;
}
