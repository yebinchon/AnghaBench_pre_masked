
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct seq_file*,char) ;
 int FUNC_2 (struct seq_file*,char*) ;

__attribute__((used)) static void FUNC_3(struct seq_file *VAR_6, int VAR_7)
{
 int VAR_8;

 FUNC_1(VAR_6, '\t');
 VAR_8 = VAR_7 & VAR_3;
 FUNC_0("mode:", VAR_8 ? "HDMI" : "DVI");
 FUNC_2(VAR_6, "\t\t\t\t\t");
 VAR_8 = VAR_7 & VAR_2;
 FUNC_0("HDCP:", VAR_8 ? "enable" : "disable");
 FUNC_2(VAR_6, "\t\t\t\t\t");
 VAR_8 = VAR_7 & VAR_1;
 FUNC_0("HDCP mode:", VAR_8 ? "ESS enable" : "OESS enable");
 FUNC_2(VAR_6, "\t\t\t\t\t");
 VAR_8 = VAR_7 & VAR_4;
 FUNC_0("Hsync polarity:", VAR_8 ? "inverted" : "normal");
 FUNC_2(VAR_6, "\t\t\t\t\t");
 VAR_8 = VAR_7 & VAR_5;
 FUNC_0("Vsync polarity:", VAR_8 ? "inverted" : "normal");
 FUNC_2(VAR_6, "\t\t\t\t\t");
 VAR_8 = VAR_7 & VAR_0;
 FUNC_0("YUV422 format:", VAR_8 ? "enable" : "disable");
}
