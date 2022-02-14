
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vb2_thread_fnc ;
struct vb2_threadio_data {int * thread; void* priv; int fnc; } ;
struct vb2_queue {struct vb2_threadio_data* threadio; int is_output; int fileio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct vb2_queue*) ;
 int FUNC_4 (struct vb2_queue*,int) ;
 int FUNC_5 (int,char*,int) ;
 int FUNC_6 (struct vb2_threadio_data*) ;
 int * FUNC_7 (int ,struct vb2_queue*,char*,char const*) ;
 struct vb2_threadio_data* FUNC_8 (int,int ) ;
 scalar_t__ FUNC_9 (struct vb2_queue*) ;
 int VAR_3 ;

int FUNC_10(struct vb2_queue *VAR_4, vb2_thread_fnc VAR_5, void *VAR_6,
       const char *VAR_7)
{
 struct vb2_threadio_data *VAR_8;
 int VAR_9 = 0;

 if (VAR_4->threadio)
  return -VAR_0;
 if (FUNC_9(VAR_4))
  return -VAR_0;
 if (FUNC_2(VAR_4->fileio))
  return -VAR_0;

 VAR_8 = FUNC_8(sizeof(*VAR_8), VAR_2);
 if (VAR_8 == ((void*)0))
  return -VAR_1;
 VAR_8->fnc = VAR_5;
 VAR_8->priv = VAR_6;

 VAR_9 = FUNC_4(VAR_4, !VAR_4->is_output);
 FUNC_5(3, "file io: vb2_init_fileio result: %d\n", VAR_9);
 if (VAR_9)
  goto nomem;
 VAR_4->threadio = VAR_8;
 VAR_8->thread = FUNC_7(VAR_3, VAR_4, "vb2-%s", VAR_7);
 if (FUNC_0(VAR_8->thread)) {
  VAR_9 = FUNC_1(VAR_8->thread);
  VAR_8->thread = ((void*)0);
  goto nothread;
 }
 return 0;

nothread:
 FUNC_3(VAR_4);
nomem:
 FUNC_6(VAR_8);
 return VAR_9;
}
