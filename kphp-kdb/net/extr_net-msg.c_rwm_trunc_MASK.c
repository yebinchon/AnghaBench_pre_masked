
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raw_message {int total_bytes; } ;


 int FUNC_0 (struct raw_message*,int ,int) ;

int FUNC_1 (struct raw_message *VAR_0, int VAR_1) {
  if (VAR_1 >= VAR_0->total_bytes) {
    return VAR_0->total_bytes;
  }
  FUNC_0 (VAR_0, 0, VAR_0->total_bytes - VAR_1);
  return VAR_1;
}
