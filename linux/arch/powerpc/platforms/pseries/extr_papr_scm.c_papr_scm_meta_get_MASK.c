
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct papr_scm_priv {scalar_t__ metadata_size; int drc_index; } ;
struct nd_cmd_get_config_data_hdr {scalar_t__ in_offset; scalar_t__ in_length; int out_buf; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ,unsigned long*,int ,unsigned long,int) ;

__attribute__((used)) static int FUNC_4(struct papr_scm_priv *VAR_5,
        struct nd_cmd_get_config_data_hdr *VAR_6)
{
 unsigned long VAR_7[VAR_4];
 unsigned long VAR_8, VAR_9;
 int VAR_10, VAR_11;
 int64_t VAR_12;

 if ((VAR_6->in_offset + VAR_6->in_length) >= VAR_5->metadata_size)
  return -VAR_0;

 for (VAR_10 = VAR_6->in_length; VAR_10; VAR_10 -= VAR_11) {

  VAR_9 = VAR_6->in_length - VAR_10;
  VAR_8 = VAR_6->in_offset + VAR_9;

  if (VAR_10 >= 8)
   VAR_11 = 8;
  else if (VAR_10 >= 4)
   VAR_11 = 4;
  else if (VAR_10 >= 2)
   VAR_11 = 2;
  else
   VAR_11 = 1;

  VAR_12 = FUNC_3(VAR_3, VAR_7, VAR_5->drc_index,
      VAR_8, VAR_11);

  if (VAR_12 == VAR_2)
   return -VAR_1;
  if (VAR_12)
   return -VAR_0;

  switch (VAR_11) {
  case 8:
   *(uint64_t *)(VAR_6->out_buf + VAR_9) = FUNC_2(VAR_7[0]);
   break;
  case 4:
   *(uint32_t *)(VAR_6->out_buf + VAR_9) = FUNC_1(VAR_7[0] & 0xffffffff);
   break;

  case 2:
   *(uint16_t *)(VAR_6->out_buf + VAR_9) = FUNC_0(VAR_7[0] & 0xffff);
   break;

  case 1:
   *(uint8_t *)(VAR_6->out_buf + VAR_9) = (VAR_7[0] & 0xff);
   break;
  }
 }
 return 0;
}
