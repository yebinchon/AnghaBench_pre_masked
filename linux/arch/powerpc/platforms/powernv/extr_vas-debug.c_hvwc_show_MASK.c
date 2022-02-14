
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vas_window {int hvwc_map; } ;
struct seq_file {struct vas_window* private; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int ) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct seq_file*,struct vas_window*,int ) ;
 int VAR_33 ;

__attribute__((used)) static int FUNC_4(struct seq_file *VAR_34, void *VAR_35)
{
 struct vas_window *VAR_36 = VAR_34->private;

 FUNC_1(&VAR_33);


 if (!VAR_36->hvwc_map)
  goto unlock;

 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_14));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_21));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_32));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_31));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_30));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_0));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_23));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_2));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_20));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_3));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_22));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_6));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_4));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_5));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_15));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_1));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_8));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_17));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_18));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_25));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_26));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_7));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_27));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_29));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_28));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_24));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_16));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_9));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_11));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_10));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_13));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_12));
 FUNC_3(VAR_34, VAR_36, FUNC_0(VAR_19));
unlock:
 FUNC_2(&VAR_33);
 return 0;
}
