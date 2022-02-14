
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spanhash_top {int alloc_log2; int data; int free; } ;
struct spanhash {int dummy; } ;
struct repository {int dummy; } ;
struct diff_filespec {unsigned char* data; unsigned int size; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int ,unsigned long,int ) ;
 struct spanhash_top* FUNC_2 (struct spanhash_top*,unsigned int,int) ;
 int FUNC_3 (struct repository*,struct diff_filespec*) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_2 ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int) ;
 struct spanhash_top* FUNC_7 (int ) ;

__attribute__((used)) static struct spanhash_top *FUNC_8(struct repository *VAR_3,
           struct diff_filespec *VAR_4)
{
 int VAR_5, VAR_6;
 unsigned int VAR_7, VAR_8, VAR_9;
 struct spanhash_top *VAR_10;
 unsigned char *VAR_11 = VAR_4->data;
 unsigned int VAR_12 = VAR_4->size;
 int VAR_13 = !FUNC_3(VAR_3, VAR_4);

 VAR_5 = VAR_1;
 VAR_10 = FUNC_7(FUNC_5(sizeof(*VAR_10),
         FUNC_6(sizeof(struct spanhash), 1<<VAR_5)));
 VAR_10->alloc_log2 = VAR_5;
 VAR_10->free = FUNC_0(VAR_5);
 FUNC_4(VAR_10->data, 0, sizeof(struct spanhash) * (1<<VAR_5));

 VAR_6 = 0;
 VAR_7 = VAR_8 = 0;
 while (VAR_12) {
  unsigned int VAR_14 = *VAR_11++;
  unsigned int VAR_15 = VAR_7;
  VAR_12--;


  if (VAR_13 && VAR_14 == '\r' && VAR_12 && *VAR_11 == '\n')
   continue;

  VAR_7 = (VAR_7 << 7) ^ (VAR_8 >> 25);
  VAR_8 = (VAR_8 << 7) ^ (VAR_15 >> 25);
  VAR_7 += VAR_14;
  if (++VAR_6 < 64 && VAR_14 != '\n')
   continue;
  VAR_9 = (VAR_7 + VAR_8 * 0x61) % VAR_0;
  VAR_10 = FUNC_2(VAR_10, VAR_9, VAR_6);
  VAR_6 = 0;
  VAR_7 = VAR_8 = 0;
 }
 FUNC_1(VAR_10->data, 1ul << VAR_10->alloc_log2, VAR_2);
 return VAR_10;
}
