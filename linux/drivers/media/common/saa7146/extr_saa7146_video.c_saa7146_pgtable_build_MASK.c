
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct videobuf_dmabuf {int sglen; struct scatterlist* sglist; } ;
struct scatterlist {int length; scalar_t__ offset; } ;
struct saa7146_pgtable {int * cpu; scalar_t__ offset; } ;
struct saa7146_format {int depth; int trans; } ;
struct saa7146_dev {struct pci_dev* pci; } ;
struct saa7146_buf {struct saa7146_pgtable* pt; TYPE_1__* fmt; int vb; } ;
struct pci_dev {int dummy; } ;
typedef int __le32 ;
struct TYPE_2__ {int width; int height; int pixelformat; } ;


 int FUNC_0 (char*,int,int,int,int,int,int) ;
 int FUNC_1 (char*,struct saa7146_dev*,struct saa7146_buf*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__) ;
 struct saa7146_format* FUNC_4 (struct saa7146_dev*,int ) ;
 int FUNC_5 (struct pci_dev*,struct saa7146_pgtable*,struct scatterlist*,int) ;
 scalar_t__ FUNC_6 (struct scatterlist*) ;
 struct videobuf_dmabuf* FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct saa7146_dev *VAR_1, struct saa7146_buf *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1->pci;
 struct videobuf_dmabuf *VAR_4=FUNC_7(&VAR_2->vb);
 struct scatterlist *VAR_5 = VAR_4->sglist;
 int VAR_6 = VAR_4->sglen;
 struct saa7146_format *VAR_7 = FUNC_4(VAR_1,VAR_2->fmt->pixelformat);

 FUNC_1("dev:%p, buf:%p, sg_len:%d\n", VAR_1, VAR_2, VAR_6);

 if( 0 != FUNC_2(VAR_7->trans)) {
  struct saa7146_pgtable *VAR_8 = &VAR_2->pt[0];
  struct saa7146_pgtable *VAR_9 = &VAR_2->pt[1];
  struct saa7146_pgtable *VAR_10 = &VAR_2->pt[2];
  __le32 *VAR_11, *VAR_12, *VAR_13;
  __le32 VAR_14;

  int VAR_15 = VAR_2->fmt->width*VAR_2->fmt->height;
  int VAR_16,VAR_17,VAR_18,VAR_19,VAR_20,VAR_21,VAR_22;

  switch( VAR_7->depth ) {
   case 12: {

    VAR_18 = ((VAR_15+VAR_0)/VAR_0)-1;
    VAR_19 = ((VAR_15+(VAR_15/4)+VAR_0)/VAR_0)-1;
    VAR_20 = ((VAR_15+(VAR_15/2)+VAR_0)/VAR_0)-1;
    VAR_21 = VAR_15%VAR_0;
    VAR_22 = (VAR_15+(VAR_15/4))%VAR_0;
    FUNC_0("size:%d, m1:%d, m2:%d, m3:%d, o1:%d, o2:%d\n",
     VAR_15, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);
    break;
   }
   case 16: {

    VAR_18 = ((VAR_15+VAR_0)/VAR_0)-1;
    VAR_19 = ((VAR_15+(VAR_15/2)+VAR_0)/VAR_0)-1;
    VAR_20 = ((2*VAR_15+VAR_0)/VAR_0)-1;
    VAR_21 = VAR_15%VAR_0;
    VAR_22 = (VAR_15+(VAR_15/2))%VAR_0;
    FUNC_0("size:%d, m1:%d, m2:%d, m3:%d, o1:%d, o2:%d\n",
     VAR_15, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22);
    break;
   }
   default: {
    return -1;
   }
  }

  VAR_11 = VAR_8->cpu;
  VAR_12 = VAR_9->cpu;
  VAR_13 = VAR_10->cpu;


  for (VAR_16 = 0; VAR_16 < VAR_6; VAR_16++, VAR_5++) {
   for (VAR_17 = 0; VAR_17 * 4096 < VAR_5->length; VAR_17++, VAR_11++) {
    *VAR_11 = FUNC_3(FUNC_6(VAR_5) - VAR_5->offset);
   }
  }
  VAR_8->offset = VAR_4->sglist->offset;
  VAR_9->offset = VAR_8->offset+VAR_21;
  VAR_10->offset = VAR_8->offset+VAR_22;


  VAR_11 = VAR_8->cpu;
  for(VAR_16 = VAR_18; VAR_16 <= VAR_19 ; VAR_16++, VAR_12++) {
   *VAR_12 = VAR_11[VAR_16];
  }
  VAR_14 = *(VAR_12-1);
  for(;VAR_16<1024;VAR_16++,VAR_12++) {
   *VAR_12 = VAR_14;
  }

  VAR_11 = VAR_8->cpu;
  for(VAR_16 = VAR_19; VAR_16 <= VAR_20; VAR_16++,VAR_13++) {
   *VAR_13 = VAR_11[VAR_16];
  }
  VAR_14 = *(VAR_13-1);
  for(;VAR_16<1024;VAR_16++,VAR_13++) {
   *VAR_13 = VAR_14;
  }

  VAR_11 = VAR_8->cpu+VAR_18;
  VAR_14 = VAR_8->cpu[VAR_18];
  for(VAR_16=VAR_18;VAR_16<1024;VAR_16++,VAR_11++) {
   *VAR_11 = VAR_14;
  }
 } else {
  struct saa7146_pgtable *VAR_23 = &VAR_2->pt[0];
  return FUNC_5(VAR_3, VAR_23, VAR_5, VAR_6);
 }

 return 0;
}
