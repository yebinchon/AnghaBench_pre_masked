
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv_sim_state {int pclk_khz; int nvclk_khz; int mclk_khz; int memory_width; int bpp; scalar_t__ memory_type; int mem_page_miss; scalar_t__ two_heads; } ;
struct nv_fifo_info {int burst; int lwm; } ;


 void* FUNC_0 (int,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void
FUNC_2(struct nv_fifo_info *VAR_0, struct nv_sim_state *VAR_1)
{
 int VAR_2, VAR_3;
 int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17;
 const int VAR_18 = 80;


 VAR_8 = VAR_1->pclk_khz;
 VAR_9 = VAR_1->nvclk_khz;
 VAR_10 = VAR_1->mclk_khz;

 VAR_2 = VAR_10 * VAR_1->memory_width / 8;
 VAR_3 = VAR_8 * VAR_1->bpp / 8;

 VAR_15 = VAR_1->two_heads ? 1536 : 1024;



 VAR_4 = 4;

 VAR_5 = 3
  + 2
  + 1

  + 1
  + 1
  + 1;

 VAR_6 = 1

  + 1
  + 5
  + 2
  + 2
  + 7;


 VAR_6 += (VAR_1->memory_type == 0 ? 2 : 1)
  * VAR_1->memory_width / 32;

 VAR_11 = VAR_6 * 1000 * 1000 / VAR_10
  + VAR_5 * 1000 * 1000 / VAR_9
  + VAR_4 * 1000 * 1000 / VAR_8;



 VAR_7 = 2 * VAR_1->mem_page_miss + VAR_6

  + 2 * VAR_1->mem_page_miss
  + (VAR_1->bpp == 32 ? 8 : 4);

 VAR_12 = VAR_7 * 1000 * 1000 / VAR_10;

 if (VAR_1->two_heads)

  VAR_12 += VAR_11 + VAR_12 + VAR_18;




 VAR_13 = (1 + VAR_15 - VAR_12 * VAR_3 / (1000 * 1000))
  * (VAR_2 / 1000) / ((VAR_2 - VAR_3) / 1000);
 VAR_0->burst = FUNC_0(VAR_13, 1024);


 VAR_14 = VAR_18 * VAR_2 / (1000 * 1000);
 VAR_0->burst = FUNC_0(VAR_14, VAR_0->burst);

 VAR_0->burst = FUNC_1(VAR_0->burst);



 VAR_16 = (VAR_11 + VAR_12) * VAR_3 / (1000 * 1000) + 1;
 VAR_17 = VAR_15 - VAR_0->burst
  + VAR_11 * VAR_3 / (1000 * 1000)
  + VAR_0->burst * VAR_3 / VAR_2;

 VAR_0->lwm = VAR_16 + 10 * (VAR_17 - VAR_16) / 100;
}
