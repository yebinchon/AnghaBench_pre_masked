
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct d40_log_lli {int dummy; } ;
typedef int dma_addr_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct d40_log_lli*,int,int,int ,int ,unsigned int) ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static struct d40_log_lli *FUNC_2(struct d40_log_lli *VAR_1,
           dma_addr_t VAR_2,
           int VAR_3,
           u32 VAR_4,
           u32 VAR_5,
           u32 VAR_6,
           unsigned int VAR_7)
{
 bool VAR_8 = VAR_7 & VAR_0;
 struct d40_log_lli *VAR_9 = VAR_1;
 int VAR_10 = VAR_3;
 int VAR_11 = 0;

 do {
  VAR_11 = FUNC_1(VAR_10, VAR_5, VAR_6);
  VAR_10 -= VAR_11;

  FUNC_0(VAR_9,
     VAR_2,
     VAR_11,
     VAR_4, VAR_5,
     VAR_7);
  if (VAR_8)
   VAR_2 += VAR_11;
  VAR_9++;
 } while (VAR_10);

 return VAR_9;
}
