
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned long uint64_t ;
typedef unsigned long uint32_t ;
typedef unsigned long uint16_t ;
struct papr_scm_priv {scalar_t__ metadata_size; int drc_index; } ;
struct nd_cmd_set_config_hdr {scalar_t__ in_offset; scalar_t__ in_length; scalar_t__ in_buf; } ;
typedef scalar_t__ int64_t ;
typedef int __be64 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ,int ,unsigned long,int,int) ;

__attribute__((used)) static int FUNC_4(struct papr_scm_priv *VAR_4,
        struct nd_cmd_set_config_hdr *VAR_5)
{
 unsigned long VAR_6, VAR_7;
 int VAR_8, VAR_9;
 unsigned long VAR_10;
 __be64 VAR_11;
 int64_t VAR_12;

 if ((VAR_5->in_offset + VAR_5->in_length) >= VAR_4->metadata_size)
  return -VAR_0;

 for (VAR_8 = VAR_5->in_length; VAR_8; VAR_8 -= VAR_9) {

  VAR_7 = VAR_5->in_length - VAR_8;
  VAR_6 = VAR_5->in_offset + VAR_7;

  if (VAR_8 >= 8) {
   VAR_10 = *(uint64_t *)(VAR_5->in_buf + VAR_7);
   VAR_11 = FUNC_2(VAR_10);
   VAR_9 = 8;
  } else if (VAR_8 >= 4) {
   VAR_10 = *(uint32_t *)(VAR_5->in_buf + VAR_7);
   VAR_10 &= 0xffffffff;
   VAR_11 = FUNC_1(VAR_10);
   VAR_9 = 4;
  } else if (VAR_8 >= 2) {
   VAR_10 = *(uint16_t *)(VAR_5->in_buf + VAR_7);
   VAR_10 &= 0xffff;
   VAR_11 = FUNC_0(VAR_10);
   VAR_9 = 2;
  } else {
   VAR_11 = *(uint8_t *)(VAR_5->in_buf + VAR_7);
   VAR_11 &= 0xff;
   VAR_9 = 1;
  }

  VAR_12 = FUNC_3(VAR_3, VAR_4->drc_index,
      VAR_6, VAR_11, VAR_9);
  if (VAR_12 == VAR_2)
   return -VAR_1;
  if (VAR_12)
   return -VAR_0;
 }

 return 0;
}
