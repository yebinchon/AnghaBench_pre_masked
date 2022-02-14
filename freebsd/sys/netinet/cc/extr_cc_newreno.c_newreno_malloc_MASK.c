
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct newreno {int beta_ecn; int beta; } ;
struct cc_var {struct newreno* cc_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct newreno* FUNC_0 (int,int ,int ) ;

__attribute__((used)) static inline struct newreno *
FUNC_1(struct cc_var *VAR_4)
{
 struct newreno *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct newreno), VAR_0, VAR_1);
 if (VAR_5 != ((void*)0)) {

  VAR_5->beta = VAR_2;
  VAR_5->beta_ecn = VAR_3;
  VAR_4->cc_data = VAR_5;
 }

 return (VAR_5);
}
