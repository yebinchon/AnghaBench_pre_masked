
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct si_sm_data {unsigned int read_pos; int truncated; int read_data; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 int FUNC_0 (unsigned char*,int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct si_sm_data *VAR_2, unsigned char *VAR_3,
     unsigned int VAR_4)
{
 if (VAR_4 < VAR_2->read_pos) {
  VAR_2->read_pos = VAR_4;
  VAR_2->truncated = 1;
 }

 FUNC_0(VAR_3, VAR_2->read_data, VAR_2->read_pos);

 if ((VAR_4 >= 3) && (VAR_2->read_pos < 3)) {


  VAR_3[2] = VAR_1;
  VAR_2->read_pos = 3;
 }
 if (VAR_2->truncated) {





  VAR_3[2] = VAR_0;
  VAR_2->truncated = 0;
 }

 return VAR_2->read_pos;
}
