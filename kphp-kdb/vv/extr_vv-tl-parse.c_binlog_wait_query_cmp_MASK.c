
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct binlog_wait_query {scalar_t__ wait_pos; long long num; } ;



long long FUNC_0 (struct binlog_wait_query *VAR_0, struct binlog_wait_query *VAR_1) {
  if (VAR_0->wait_pos != VAR_1->wait_pos) {
    return VAR_0->wait_pos - VAR_1->wait_pos;
  }
  return VAR_0->num - VAR_1->num;
}
