
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_writer {int dest_fd; scalar_t__ use_sideband; } ;



void FUNC_0(struct packet_writer *VAR_0, int VAR_1)
{
 VAR_0->dest_fd = VAR_1;
 VAR_0->use_sideband = 0;
}
