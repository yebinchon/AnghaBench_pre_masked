
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {struct vb2_fileio_data* fileio; int type; } ;
struct vb2_fileio_data {scalar_t__ count; int memory; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct vb2_fileio_data*) ;
 int FUNC_2 (struct vb2_queue*,int ,scalar_t__*) ;
 int FUNC_3 (struct vb2_queue*,int ) ;

__attribute__((used)) static int FUNC_4(struct vb2_queue *VAR_0)
{
 struct vb2_fileio_data *VAR_1 = VAR_0->fileio;

 if (VAR_1) {
  FUNC_3(VAR_0, VAR_0->type);
  VAR_0->fileio = ((void*)0);
  VAR_1->count = 0;
  FUNC_2(VAR_0, VAR_1->memory, &VAR_1->count);
  FUNC_1(VAR_1);
  FUNC_0(3, "file io emulator closed\n");
 }
 return 0;
}
