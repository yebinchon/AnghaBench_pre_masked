
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct drbd_thread_timing_details {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct seq_file*,struct drbd_thread_timing_details*,unsigned long) ;
 int FUNC_1 (struct seq_file*,char*,char const*) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_1,
  const char *VAR_2,
  unsigned int VAR_3, struct drbd_thread_timing_details *VAR_4, unsigned long VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;

 FUNC_1(VAR_1, "%s\n", VAR_2);




 VAR_6 = VAR_3 % VAR_0;
 for (VAR_7 = VAR_6; VAR_7 < VAR_0; VAR_7++)
  FUNC_0(VAR_1, VAR_4+VAR_7, VAR_5);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_0(VAR_1, VAR_4+VAR_7, VAR_5);
}
