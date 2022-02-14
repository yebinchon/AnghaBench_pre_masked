
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tss_struct {int io_bitmap; } ;
struct thread_struct {int io_bitmap_max; int io_bitmap_ptr; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 () ;
 struct tss_struct* FUNC_4 (int *) ;

__attribute__((used)) static inline void FUNC_5(struct thread_struct *VAR_2,
        struct thread_struct *VAR_3,
        unsigned long VAR_4, unsigned long VAR_5)
{
 struct tss_struct *VAR_6 = FUNC_4(&VAR_1);

 if (VAR_5 & VAR_0) {




  FUNC_1(VAR_6->io_bitmap, VAR_3->io_bitmap_ptr,
         FUNC_0(VAR_2->io_bitmap_max, VAR_3->io_bitmap_max));




  FUNC_3();
 } else if (VAR_4 & VAR_0) {



  FUNC_2(VAR_6->io_bitmap, 0xff, VAR_2->io_bitmap_max);
 }
}
