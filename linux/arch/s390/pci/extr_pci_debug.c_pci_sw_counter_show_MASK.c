
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zpci_dev {int allocated_pages; } ;
struct seq_file {struct zpci_dev* private; } ;
typedef int atomic64_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int FUNC_2 (struct seq_file*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_1)
{
 struct zpci_dev *VAR_2 = VAR_1->private;
 atomic64_t *VAR_3 = &VAR_2->allocated_pages;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++, VAR_3++)
  FUNC_2(VAR_1, "%26s:\t%llu\n", VAR_0[VAR_4],
      FUNC_1(VAR_3));
}
