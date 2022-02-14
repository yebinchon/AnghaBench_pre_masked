
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mfc_dma_command {int lsa; int ea; int size; int tag; int cmd; scalar_t__ class; } ;


 int VAR_0 ;






 int FUNC_0 (char*,...) ;

__attribute__((used)) static int FUNC_1(struct mfc_dma_command *VAR_1)
{
 FUNC_0("queueing DMA %x %llx %x %x %x\n", VAR_1->lsa,
   VAR_1->ea, VAR_1->size, VAR_1->tag, VAR_1->cmd);

 switch (VAR_1->cmd) {
 case 128:
 case 129:
 case 130:
 case 131:
 case 132:
 case 133:
  break;
 default:
  FUNC_0("invalid DMA opcode %x\n", VAR_1->cmd);
  return -VAR_0;
 }

 if ((VAR_1->lsa & 0xf) != (VAR_1->ea &0xf)) {
  FUNC_0("invalid DMA alignment, ea %llx lsa %x\n",
    VAR_1->ea, VAR_1->lsa);
  return -VAR_0;
 }

 switch (VAR_1->size & 0xf) {
 case 1:
  break;
 case 2:
  if (VAR_1->lsa & 1)
   goto error;
  break;
 case 4:
  if (VAR_1->lsa & 3)
   goto error;
  break;
 case 8:
  if (VAR_1->lsa & 7)
   goto error;
  break;
 case 0:
  if (VAR_1->lsa & 15)
   goto error;
  break;
 error:
 default:
  FUNC_0("invalid DMA alignment %x for size %x\n",
   VAR_1->lsa & 0xf, VAR_1->size);
  return -VAR_0;
 }

 if (VAR_1->size > 16 * 1024) {
  FUNC_0("invalid DMA size %x\n", VAR_1->size);
  return -VAR_0;
 }

 if (VAR_1->tag & 0xfff0) {

  FUNC_0("invalid DMA tag\n");
  return -VAR_0;
 }

 if (VAR_1->class) {

  FUNC_0("invalid DMA class\n");
  return -VAR_0;
 }

 return 0;
}
