
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line {int dummy; } ;
struct chan_opts {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct line*,int,char*,struct chan_opts const*,char**) ;
 int FUNC_1 (char*,char**,int ) ;

int FUNC_2(struct line *VAR_1, unsigned int VAR_2, char *VAR_3,
  const struct chan_opts *VAR_4, char **VAR_5)
{
 char *VAR_6;
 int VAR_7;

 if (*VAR_3 == '=') {
  *VAR_5 = "Can't configure all devices from mconsole";
  return -VAR_0;
 }

 VAR_7 = FUNC_1(VAR_3, &VAR_6, 0);
 if (*VAR_6++ != '=') {
  *VAR_5 = "Couldn't parse device number";
  return -VAR_0;
 }
 if (VAR_7 >= VAR_2) {
  *VAR_5 = "Device number out of range";
  return -VAR_0;
 }

 return FUNC_0(VAR_1, VAR_7, VAR_6, VAR_4, VAR_5);
}
