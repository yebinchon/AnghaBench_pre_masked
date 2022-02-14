
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;
struct lanai_buffer {int dmaaddr; int * start; int * end; int * ptr; } ;


 int FUNC_0 (int,char*,unsigned long) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int * FUNC_1 (int *,int,int*,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct lanai_buffer *VAR_2,
 size_t VAR_3, size_t VAR_4, struct pci_dev *VAR_5)
{
 int VAR_6;

 if (VAR_3 > (128 * 1024))
  VAR_3 = 128 * 1024;
 for (VAR_6 = VAR_1; VAR_6 < VAR_3; VAR_6 *= 2)
  ;
 if (VAR_4 < VAR_1)
  VAR_4 = VAR_1;
 do {





  VAR_2->start = FUNC_1(&VAR_5->dev,
      VAR_6, &VAR_2->dmaaddr, VAR_0);
  if (VAR_2->start != ((void*)0)) {

   FUNC_0((VAR_2->dmaaddr & ~0xFFFFFF00) == 0,
       "bad dmaaddr: 0x%lx\n",
       (unsigned long) VAR_2->dmaaddr);
   VAR_2->ptr = VAR_2->start;
   VAR_2->end = (u32 *)
       (&((unsigned char *) VAR_2->start)[VAR_6]);
   FUNC_2(VAR_2->start, 0, VAR_6);
   break;
  }
  VAR_6 /= 2;
 } while (VAR_6 >= VAR_4);
}
