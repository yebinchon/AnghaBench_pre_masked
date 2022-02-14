
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcpa_event {int pcr_index; int event_type; int event_size; } ;
struct seq_file {int dummy; } ;


 void* FUNC_0 (int) ;
 int FUNC_1 (struct tcpa_event*,struct tcpa_event*,int) ;
 int FUNC_2 (struct seq_file*,char) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_0, void *VAR_1)
{
 struct tcpa_event *VAR_2 = VAR_1;
 struct tcpa_event VAR_3;
 char *VAR_4;
 int VAR_5;

 FUNC_1(&VAR_3, VAR_2, sizeof(struct tcpa_event));


 VAR_3.pcr_index = FUNC_0(VAR_2->pcr_index);
 VAR_3.event_type = FUNC_0(VAR_2->event_type);
 VAR_3.event_size = FUNC_0(VAR_2->event_size);

 VAR_4 = (char *) &VAR_3;

 for (VAR_5 = 0; VAR_5 < (sizeof(struct tcpa_event) - 1) ; VAR_5++)
  FUNC_2(VAR_0, VAR_4[VAR_5]);

 VAR_4 = (char *) VAR_1;

 for (VAR_5 = (sizeof(struct tcpa_event) - 1);
      VAR_5 < (sizeof(struct tcpa_event) + VAR_3.event_size); VAR_5++)
  FUNC_2(VAR_0, VAR_4[VAR_5]);

 return 0;

}
