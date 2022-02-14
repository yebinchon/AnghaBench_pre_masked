
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5l_log {scalar_t__ log_start; } ;
struct r5l_io_unit {int need_split_bio; scalar_t__ log_end; } ;


 int VAR_0 ;
 int FUNC_0 (struct r5l_log*) ;
 scalar_t__ FUNC_1 (struct r5l_log*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_2(struct r5l_log *VAR_1, struct r5l_io_unit *VAR_2)
{
 VAR_1->log_start = FUNC_1(VAR_1, VAR_1->log_start, VAR_0);

 FUNC_0(VAR_1);







 if (VAR_1->log_start == 0)
  VAR_2->need_split_bio = 1;

 VAR_2->log_end = VAR_1->log_start;
}
