
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msu_buffer {void* (* assign ) (struct device*,int*) ;} ;
struct msc {int mode; int buf_mutex; struct msu_buffer const* mbuf; void* mbuf_priv; int do_irq; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 struct msc* FUNC_2 (struct device*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char const*,size_t,int ) ;
 int FUNC_5 (int ,int ,char*) ;
 char* FUNC_6 (char const*,char,size_t) ;
 int FUNC_7 (struct msc*) ;
 int FUNC_8 (struct msc*) ;
 int VAR_5 ;
 struct msu_buffer* FUNC_9 (char*) ;
 int FUNC_10 (struct msu_buffer const*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 void* FUNC_13 (struct device*,int*) ;

__attribute__((used)) static ssize_t
FUNC_14(struct device *VAR_6, struct device_attribute *VAR_7, const char *VAR_8,
    size_t VAR_9)
{
 const struct msu_buffer *VAR_10 = ((void*)0);
 struct msc *VAR_11 = FUNC_2(VAR_6);
 size_t VAR_12 = VAR_9;
 char *VAR_13, *VAR_14;
 int VAR_15, VAR_16;

 if (!FUNC_1(VAR_0))
  return -VAR_3;

 VAR_13 = FUNC_6(VAR_8, '\n', VAR_12);
 if (VAR_13)
  VAR_12 = VAR_13 - VAR_8;

 VAR_14 = FUNC_4(VAR_8, VAR_12, VAR_4);
 if (!VAR_14)
  return -VAR_2;

 VAR_15 = FUNC_5(VAR_5, FUNC_0(VAR_5), VAR_14);
 if (VAR_15 >= 0) {
  FUNC_3(VAR_14);
  goto found;
 }


 if (!VAR_11->do_irq) {
  FUNC_3(VAR_14);
  return -VAR_1;
 }

 VAR_10 = FUNC_9(VAR_14);
 FUNC_3(VAR_14);
 if (VAR_10)
  goto found;

 return -VAR_1;

found:
 FUNC_11(&VAR_11->buf_mutex);
 VAR_16 = 0;


 if (VAR_10 && VAR_10 == VAR_11->mbuf) {

  FUNC_10(VAR_10);
  goto unlock;
 }

 VAR_16 = FUNC_8(VAR_11);
 if (VAR_16)
  goto unlock;

 if (VAR_10) {
  void *VAR_17 = VAR_10->assign(VAR_6, &VAR_15);

  if (!VAR_17) {
   VAR_16 = -VAR_2;
   goto unlock;
  }

  FUNC_7(VAR_11);
  VAR_11->mbuf_priv = VAR_17;
  VAR_11->mbuf = VAR_10;
 } else {
  FUNC_7(VAR_11);
 }

 VAR_11->mode = VAR_15;

unlock:
 if (VAR_16 && VAR_10)
  FUNC_10(VAR_10);
 FUNC_12(&VAR_11->buf_mutex);

 return VAR_16 ? VAR_16 : VAR_9;
}
