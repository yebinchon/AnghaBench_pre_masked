
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct string_list {int dummy; } ;
struct packet_reader {int line; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct packet_reader*) ;
 int FUNC_1 (struct string_list*,int ) ;

__attribute__((used)) static void FUNC_2(struct packet_reader *VAR_1,
         struct string_list *VAR_2)
{
 while (1) {
  if (FUNC_0(VAR_1) != VAR_0)
   break;

  FUNC_1(VAR_2, VAR_1->line);
 }
}
