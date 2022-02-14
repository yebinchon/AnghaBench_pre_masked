
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct hd_struct {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct request_queue* queue; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 struct hd_struct* FUNC_0 (struct device*) ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (int) ;
 int * VAR_5 ;
 unsigned int FUNC_2 (struct request_queue*,struct hd_struct*) ;
 int FUNC_3 (struct hd_struct*,int ) ;
 scalar_t__ FUNC_4 (struct hd_struct*,size_t) ;
 TYPE_1__* FUNC_5 (struct hd_struct*) ;
 int * VAR_6 ;
 int FUNC_6 (char*,char*,int,int,unsigned long long,unsigned int,int,int,unsigned long long,unsigned int,unsigned int,int ,int ,int,int,unsigned long long,unsigned int) ;
 int VAR_7 ;

ssize_t FUNC_7(struct device *VAR_8,
         struct device_attribute *VAR_9, char *VAR_10)
{
 struct hd_struct *VAR_11 = FUNC_0(VAR_8);
 struct request_queue *VAR_12 = FUNC_5(VAR_11)->queue;
 unsigned int VAR_13;

 VAR_13 = FUNC_2(VAR_12, VAR_11);
 return FUNC_6(VAR_10,
  "%8lu %8lu %8llu %8u "
  "%8lu %8lu %8llu %8u "
  "%8u %8u %8u "
  "%8lu %8lu %8llu %8u"
  "\n",
  FUNC_3(VAR_11, VAR_4[VAR_1]),
  FUNC_3(VAR_11, VAR_5[VAR_1]),
  (unsigned long long)FUNC_3(VAR_11, VAR_6[VAR_1]),
  (unsigned int)FUNC_4(VAR_11, VAR_1),
  FUNC_3(VAR_11, VAR_4[VAR_2]),
  FUNC_3(VAR_11, VAR_5[VAR_2]),
  (unsigned long long)FUNC_3(VAR_11, VAR_6[VAR_2]),
  (unsigned int)FUNC_4(VAR_11, VAR_2),
  VAR_13,
  FUNC_1(FUNC_3(VAR_11, VAR_3)),
  FUNC_1(FUNC_3(VAR_11, VAR_7)),
  FUNC_3(VAR_11, VAR_4[VAR_0]),
  FUNC_3(VAR_11, VAR_5[VAR_0]),
  (unsigned long long)FUNC_3(VAR_11, VAR_6[VAR_0]),
  (unsigned int)FUNC_4(VAR_11, VAR_0));
}
