
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char const u8 ;
typedef int u64 ;
typedef int u32 ;
struct stm_data {scalar_t__ (* packet ) (struct stm_data*,unsigned int,unsigned int,int ,int ,int,unsigned char const*) ;} ;
typedef scalar_t__ ssize_t ;
typedef int payload ;
typedef int header ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct stm_data*,unsigned int,unsigned int,int,int **,int) ;
 scalar_t__ FUNC_2 (struct stm_data*,unsigned int,unsigned int,int ,int ,int,unsigned char const*) ;
 scalar_t__ FUNC_3 (struct stm_data*,unsigned int,unsigned int,int ,int ,int,unsigned char const*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct stm_data *VAR_5, unsigned int VAR_6, unsigned int VAR_7)
{
 u32 VAR_8 = VAR_0;
 const unsigned char VAR_9 = 0;
 u64 VAR_10[2];
 ssize_t VAR_11;

 VAR_11 = VAR_5->packet(VAR_5, VAR_6, VAR_7, VAR_2, VAR_4,
     4, (u8 *)&VAR_8);
 if (VAR_11 <= 0)
  return VAR_11;

 VAR_10[0] = FUNC_0();
 VAR_10[1] = VAR_1;
 VAR_11 = FUNC_1(VAR_5, VAR_6, VAR_7, 0, &VAR_10, sizeof(VAR_10));
 if (VAR_11 <= 0)
  return VAR_11;

 VAR_5->packet(VAR_5, VAR_6, VAR_7, VAR_3, 0, 0, &VAR_9);

 return sizeof(VAR_8) + sizeof(VAR_10);
}
