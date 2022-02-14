
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ishtp_device {int devc; int wr_processing_spinlock; int wr_free_list; int wr_processing_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct ishtp_device*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct ishtp_device*,int ,int*,int) ;
 int FUNC_3 (struct ishtp_device*) ;
 int FUNC_4 (struct ishtp_device*,int ) ;
 int FUNC_5 (struct ishtp_device*) ;
 int FUNC_6 (struct ishtp_device*) ;
 int FUNC_7 (struct ishtp_device*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (struct ishtp_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct ishtp_device *VAR_10)
{
 uint32_t VAR_11;
 unsigned long VAR_12;


 VAR_11 = FUNC_4(VAR_10, VAR_2) & 0xFFFF;


 FUNC_9(&VAR_10->wr_processing_spinlock, VAR_12);
 FUNC_8(&VAR_10->wr_processing_list, &VAR_10->wr_free_list);
 FUNC_10(&VAR_10->wr_processing_spinlock, VAR_12);


 FUNC_7(VAR_10);

 if (!FUNC_3(VAR_10))
  FUNC_11(VAR_10, VAR_9,
   VAR_7, VAR_5);


 if (!FUNC_3(VAR_10))
  return -VAR_1;




 FUNC_5(VAR_10);

 FUNC_2(VAR_10, VAR_3, &VAR_11,
    sizeof(uint32_t));


 FUNC_11(VAR_10, VAR_8,
   VAR_6, VAR_4);
 if (!FUNC_6(VAR_10)) {

  uint32_t VAR_13;

  VAR_13 = FUNC_0(VAR_10);
  FUNC_1(VAR_10->devc,
   "[ishtp-ish]: completed reset, ISH is dead (FWSTS = %08X)\n",
   VAR_13);
  return -VAR_0;
 }
 return 0;
}
