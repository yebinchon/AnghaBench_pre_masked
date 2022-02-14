
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udp_target {int received_prefix; int received_tree; } ;


 scalar_t__ FUNC_0 (int ,int) ;

int FUNC_1 (struct udp_target *VAR_0, int VAR_1) {
  return (VAR_1 <= VAR_0->received_prefix || FUNC_0 (VAR_0->received_tree, VAR_1));
}
