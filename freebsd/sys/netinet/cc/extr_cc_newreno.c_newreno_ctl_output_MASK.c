
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockopt {int sopt_valsize; int sopt_dir; } ;
struct newreno {int beta_ecn; int beta; } ;
struct cc_var {struct newreno* cc_data; } ;
struct cc_newreno_opts {int val; int name; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct newreno* FUNC_0 (struct cc_var*) ;

__attribute__((used)) static int
FUNC_1(struct cc_var *VAR_8, struct sockopt *VAR_9, void *VAR_10)
{
 struct newreno *VAR_11;
 struct cc_newreno_opts *VAR_12;

 if (VAR_9->sopt_valsize != sizeof(struct cc_newreno_opts))
  return (VAR_2);

 VAR_11 = VAR_8->cc_data;
 VAR_12 = VAR_10;

 switch (VAR_9->sopt_dir) {
 case 128:

  if (VAR_11 == ((void*)0)) {
   VAR_11 = FUNC_0(VAR_8);
   if (VAR_11 == ((void*)0))
    return (VAR_3);
  }
  switch (VAR_12->name) {
  case 131:
   VAR_11->beta = VAR_12->val;
   break;
  case 130:
   if (!VAR_5)
    return (VAR_0);
   VAR_11->beta_ecn = VAR_12->val;
   break;
  default:
   return (VAR_4);
  }
  break;
 case 129:
  switch (VAR_12->name) {
  case 131:
   VAR_12->val = (VAR_11 == ((void*)0)) ?
       VAR_6 : VAR_11->beta;
   break;
  case 130:
   VAR_12->val = (VAR_11 == ((void*)0)) ?
       VAR_7 : VAR_11->beta_ecn;
   break;
  default:
   return (VAR_4);
  }
  break;
 default:
  return (VAR_1);
 }

 return (0);
}
