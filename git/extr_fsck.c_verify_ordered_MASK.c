
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int FUNC_3(unsigned VAR_2, const char *VAR_3, unsigned VAR_4, const char *VAR_5)
{
 int VAR_6 = FUNC_2(VAR_3);
 int VAR_7 = FUNC_2(VAR_5);
 int VAR_8 = VAR_6 < VAR_7 ? VAR_6 : VAR_7;
 unsigned char VAR_9, VAR_10;
 int VAR_11;

 VAR_11 = FUNC_1(VAR_3, VAR_5, VAR_8);
 if (VAR_11 < 0)
  return 0;
 if (VAR_11 > 0)
  return VAR_1;






 VAR_9 = VAR_3[VAR_8];
 VAR_10 = VAR_5[VAR_8];
 if (!VAR_9 && !VAR_10)





  return VAR_0;
 if (!VAR_9 && FUNC_0(VAR_2))
  VAR_9 = '/';
 if (!VAR_10 && FUNC_0(VAR_4))
  VAR_10 = '/';
 return VAR_9 < VAR_10 ? 0 : VAR_1;
}
