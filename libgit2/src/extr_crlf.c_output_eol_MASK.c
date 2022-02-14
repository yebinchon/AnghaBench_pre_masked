
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crlf_attrs {int crlf_action; int core_eol; } ;
typedef int git_configmap_value ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crlf_attrs*) ;

__attribute__((used)) static git_configmap_value FUNC_1(struct crlf_attrs *VAR_3)
{
 switch (VAR_3->crlf_action) {
 case 132:
  return VAR_2;
 case 130:
  return VAR_0;
 case 129:
  return VAR_1;
 case 128:
 case 134:
  return VAR_0;
 case 133:
  return VAR_1;
 case 131:
 case 135:
  return FUNC_0(VAR_3) ? VAR_0 : VAR_1;
 }


 return VAR_3->core_eol;
}
