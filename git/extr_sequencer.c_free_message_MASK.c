
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct commit_message {int message; int subject; int label; int parent_label; } ;
struct commit {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct commit*,int ) ;

__attribute__((used)) static void FUNC_2(struct commit *VAR_0, struct commit_message *VAR_1)
{
 FUNC_0(VAR_1->parent_label);
 FUNC_0(VAR_1->label);
 FUNC_0(VAR_1->subject);
 FUNC_1(VAR_0, VAR_1->message);
}
