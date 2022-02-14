
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entropy_store {int last_data_init; int name; int lock; int last_data; } ;
typedef int ssize_t ;
typedef int __u8 ;


 int FUNC_0 (struct entropy_store*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct entropy_store*,void*,size_t,scalar_t__) ;
 size_t FUNC_2 (struct entropy_store*,size_t,int,int) ;
 int FUNC_3 (struct entropy_store*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int ,size_t,int ,int ) ;
 int FUNC_8 (struct entropy_store*,size_t) ;

__attribute__((used)) static ssize_t FUNC_9(struct entropy_store *VAR_3, void *VAR_4,
     size_t VAR_5, int VAR_6, int VAR_7)
{
 __u8 VAR_8[VAR_0];
 unsigned long VAR_9;


 if (VAR_2) {
  FUNC_5(&VAR_3->lock, VAR_9);
  if (!VAR_3->last_data_init) {
   VAR_3->last_data_init = 1;
   FUNC_6(&VAR_3->lock, VAR_9);
   FUNC_7(VAR_3->name, VAR_0,
           FUNC_0(VAR_3), VAR_1);
   FUNC_8(VAR_3, VAR_0);
   FUNC_3(VAR_3, VAR_8);
   FUNC_5(&VAR_3->lock, VAR_9);
   FUNC_4(VAR_3->last_data, VAR_8, VAR_0);
  }
  FUNC_6(&VAR_3->lock, VAR_9);
 }

 FUNC_7(VAR_3->name, VAR_5, FUNC_0(VAR_3), VAR_1);
 FUNC_8(VAR_3, VAR_5);
 VAR_5 = FUNC_2(VAR_3, VAR_5, VAR_6, VAR_7);

 return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2);
}
