
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_data {int* read_data; int* write_data; int read_count; } ;



__attribute__((used)) static void FUNC_0(struct si_sm_data *VAR_0, unsigned char VAR_1)
{
 VAR_0->read_data[0] = 4;
 VAR_0->read_data[1] = VAR_0->write_data[1] | 4;
 VAR_0->read_data[2] = VAR_0->write_data[2];
 VAR_0->read_data[3] = VAR_0->write_data[3];
 VAR_0->read_data[4] = VAR_1;
 VAR_0->read_count = 5;
}
