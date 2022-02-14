
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hent {scalar_t__ h_feetpages; int h_name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int
FUNC_1(const void *VAR_2, const void *VAR_3)
{
 register const struct hent *VAR_4, *VAR_5;
 register int VAR_6;

 VAR_4 = *(const struct hent * const *)VAR_2;
 VAR_5 = *(const struct hent * const *)VAR_3;
 if (VAR_1)
  VAR_6 = VAR_4->h_feetpages < VAR_5->h_feetpages ?
      -1 : VAR_4->h_feetpages > VAR_5->h_feetpages;
 else
  VAR_6 = FUNC_0(VAR_4->h_name, VAR_5->h_name);
 return(VAR_0 ? -VAR_6 : VAR_6);
}
