
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_reader {scalar_t__ status; int line; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct packet_reader*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct packet_reader *VAR_3)
{
 while (FUNC_3(VAR_3) == VAR_1)
  FUNC_1(&VAR_2, VAR_3->line);

 if (VAR_3->status != VAR_0)
  FUNC_2(FUNC_0("expected flush after capabilities"));
}
