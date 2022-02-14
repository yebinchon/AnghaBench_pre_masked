
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct text_stat {scalar_t__ lonelf; scalar_t__ crlf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct text_stat*) ;
 int FUNC_1 (char const*,unsigned long,struct text_stat*) ;

__attribute__((used)) static unsigned int FUNC_2(const char *VAR_3, unsigned long VAR_4)
{
 struct text_stat VAR_5;
 int VAR_6 = 0;
 if (!VAR_3 || !VAR_4)
  return 0;
 FUNC_1(VAR_3, VAR_4, &VAR_5);
 if (FUNC_0(&VAR_5))
  VAR_6 |= VAR_0;
 if (VAR_5.crlf)
  VAR_6 |= VAR_1;
 if (VAR_5.lonelf)
  VAR_6 |= VAR_2;

 return VAR_6;
}
