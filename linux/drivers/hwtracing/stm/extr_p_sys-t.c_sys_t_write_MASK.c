
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char const u8 ;
typedef char const u64 ;
typedef int u32 ;
typedef size_t u16 ;
typedef int ts ;
struct TYPE_3__ {char const* b; } ;
struct TYPE_4__ {scalar_t__ do_len; TYPE_1__ uuid; } ;
struct sys_t_output {TYPE_2__ node; } ;
struct stm_output {unsigned int channel; unsigned int master; struct sys_t_output* pdrv_private; } ;
struct stm_data {scalar_t__ (* packet ) (struct stm_data*,unsigned int,unsigned int,int ,int ,int,unsigned char const*) ;} ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 char FUNC_0 () ;
 scalar_t__ FUNC_1 (struct stm_data*,unsigned int,unsigned int,int,char const*,size_t) ;
 scalar_t__ FUNC_2 (struct stm_data*,unsigned int,unsigned int,int ,int ,int,unsigned char const*) ;
 scalar_t__ FUNC_3 (struct stm_data*,unsigned int,unsigned int,int ,int ,int,unsigned char const*) ;
 scalar_t__ FUNC_4 (struct stm_data*,unsigned int,unsigned int,int ,int ,int,unsigned char const*) ;
 scalar_t__ FUNC_5 (struct stm_data*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_6 (struct sys_t_output*) ;
 scalar_t__ FUNC_7 (struct sys_t_output*) ;

__attribute__((used)) static ssize_t FUNC_8(struct stm_data *VAR_8, struct stm_output *VAR_9,
      unsigned int VAR_10, const char *VAR_11, size_t VAR_12)
{
 struct sys_t_output *VAR_13 = VAR_9->pdrv_private;
 unsigned int VAR_14 = VAR_9->channel + VAR_10;
 unsigned int VAR_15 = VAR_9->master;
 const unsigned char VAR_16 = 0;
 u32 VAR_17 = VAR_0;
 ssize_t VAR_18;


 if (!VAR_13)
  return -VAR_1;

 if (FUNC_6(VAR_13)) {
  VAR_18 = FUNC_5(VAR_8, VAR_15, VAR_14);
  if (VAR_18 <= 0)
   return VAR_18;
 }

 if (VAR_13->node.do_len)
  VAR_17 |= VAR_2;
 if (FUNC_7(VAR_13))
  VAR_17 |= VAR_3;
 VAR_18 = VAR_8->packet(VAR_8, VAR_15, VAR_14, VAR_4, VAR_6,
     4, (u8 *)&VAR_17);
 if (VAR_18 <= 0)
  return VAR_18;


 VAR_18 = FUNC_1(VAR_8, VAR_15, VAR_14, 0, VAR_13->node.uuid.b, VAR_7);
 if (VAR_18 <= 0)
  return VAR_18;


 if (VAR_13->node.do_len) {
  u16 VAR_19 = VAR_12;

  VAR_18 = VAR_8->packet(VAR_8, VAR_15, VAR_14, VAR_4, 0, 2,
      (u8 *)&VAR_19);
  if (VAR_18 <= 0)
   return VAR_18;
 }


 if (VAR_17 & VAR_3) {
  u64 VAR_20 = FUNC_0();

  VAR_18 = FUNC_1(VAR_8, VAR_15, VAR_14, 0, &VAR_20, sizeof(VAR_20));
  if (VAR_18 <= 0)
   return VAR_18;
 }


 VAR_18 = FUNC_1(VAR_8, VAR_15, VAR_14, 0, VAR_11, VAR_12);
 if (VAR_18 > 0)
  VAR_8->packet(VAR_8, VAR_15, VAR_14, VAR_5, 0, 0, &VAR_16);

 return VAR_18;
}
