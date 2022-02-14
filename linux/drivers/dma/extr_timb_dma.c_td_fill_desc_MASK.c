
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct timb_dma_chan {int chan; } ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int*,unsigned long long) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct scatterlist*) ;
 int FUNC_4 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_5(struct timb_dma_chan *VAR_2, u8 *VAR_3,
 struct scatterlist *VAR_4, bool VAR_5)
{
 if (FUNC_4(VAR_4) > VAR_1) {
  FUNC_2(FUNC_0(&VAR_2->chan), "Too big sg element\n");
  return -VAR_0;
 }


 if (FUNC_4(VAR_4) % sizeof(u32)) {
  FUNC_2(FUNC_0(&VAR_2->chan), "Incorrect length: %d\n",
   FUNC_4(VAR_4));
  return -VAR_0;
 }

 FUNC_1(FUNC_0(&VAR_2->chan), "desc: %p, addr: 0x%llx\n",
  VAR_3, (unsigned long long)FUNC_3(VAR_4));

 VAR_3[7] = (FUNC_3(VAR_4) >> 24) & 0xff;
 VAR_3[6] = (FUNC_3(VAR_4) >> 16) & 0xff;
 VAR_3[5] = (FUNC_3(VAR_4) >> 8) & 0xff;
 VAR_3[4] = (FUNC_3(VAR_4) >> 0) & 0xff;

 VAR_3[3] = (FUNC_4(VAR_4) >> 8) & 0xff;
 VAR_3[2] = (FUNC_4(VAR_4) >> 0) & 0xff;

 VAR_3[1] = 0x00;
 VAR_3[0] = 0x21 | (VAR_5 ? 0x02 : 0);

 return 0;
}
