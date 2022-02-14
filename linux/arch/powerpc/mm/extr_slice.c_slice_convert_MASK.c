
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slice_mask {unsigned int low_slices; int high_slices; } ;
struct mm_struct {int context; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long VAR_0 ;
 int FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (struct mm_struct*) ;
 unsigned char* FUNC_4 (int *) ;
 unsigned char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 int FUNC_7 (char*,...) ;
 struct slice_mask* FUNC_8 (int *,int) ;
 int FUNC_9 (char*,struct slice_mask const*) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (unsigned long,int ) ;

__attribute__((used)) static void FUNC_13(struct mm_struct *VAR_2,
    const struct slice_mask *VAR_3, int VAR_4)
{
 int VAR_5, VAR_6;

 unsigned char *VAR_7, *VAR_8;
 struct slice_mask *VAR_9, *VAR_10;
 unsigned long VAR_11, VAR_12;
 int VAR_13;

 FUNC_7("slice_convert(mm=%p, psize=%d)\n", VAR_2, VAR_4);
 FUNC_9(" mask", VAR_3);

 VAR_9 = FUNC_8(&VAR_2->context, VAR_4);




 FUNC_10(&VAR_1, VAR_12);

 VAR_8 = FUNC_5(&VAR_2->context);
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  if (!(VAR_3->low_slices & (1u << VAR_11)))
   continue;

  VAR_6 = VAR_11 & 0x1;
  VAR_5 = VAR_11 >> 1;


  VAR_13 = (VAR_8[VAR_5] >> (VAR_6 * 4)) & 0xf;
  VAR_10 = FUNC_8(&VAR_2->context, VAR_13);
  VAR_10->low_slices &= ~(1u << VAR_11);
  VAR_9->low_slices |= 1u << VAR_11;


  VAR_8[VAR_5] = (VAR_8[VAR_5] & ~(0xf << (VAR_6 * 4))) |
    (((unsigned long)VAR_4) << (VAR_6 * 4));
 }

 VAR_7 = FUNC_4(&VAR_2->context);
 for (VAR_11 = 0; VAR_11 < FUNC_0(FUNC_6(&VAR_2->context)); VAR_11++) {
  if (!FUNC_12(VAR_11, VAR_3->high_slices))
   continue;

  VAR_6 = VAR_11 & 0x1;
  VAR_5 = VAR_11 >> 1;


  VAR_13 = (VAR_7[VAR_5] >> (VAR_6 * 4)) & 0xf;
  VAR_10 = FUNC_8(&VAR_2->context, VAR_13);
  FUNC_1(VAR_11, VAR_10->high_slices);
  FUNC_2(VAR_11, VAR_9->high_slices);


  VAR_7[VAR_5] = (VAR_7[VAR_5] & ~(0xf << (VAR_6 * 4))) |
    (((unsigned long)VAR_4) << (VAR_6 * 4));
 }

 FUNC_7(" lsps=%lx, hsps=%lx\n",
    (unsigned long)FUNC_5(&VAR_2->context),
    (unsigned long)FUNC_4(&VAR_2->context));

 FUNC_11(&VAR_1, VAR_12);

 FUNC_3(VAR_2);
}
