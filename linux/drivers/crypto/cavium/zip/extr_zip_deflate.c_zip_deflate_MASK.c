
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ totalbyteswritten; int crc32; int adler32; int compcode; } ;
union zip_zres_s {TYPE_2__ s; } ;
typedef union zip_inst_s {int dummy; } zip_inst_s ;
typedef int u32 ;
struct zip_state {union zip_zres_s result; union zip_inst_s zip_cmd; } ;
struct zip_operation {scalar_t__ input_len; int format; scalar_t__ output_len; int csum; int compcode; } ;
struct TYPE_3__ {int comp_out_bytes; int comp_req_complete; int comp_req_submit; int comp_in_bytes; } ;
struct zip_device {TYPE_1__ stats; } ;
 int VAR_0 ;

 int FUNC_0 (scalar_t__,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct zip_operation*,struct zip_state*,union zip_inst_s*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,scalar_t__,...) ;
 int FUNC_5 (union zip_inst_s*,struct zip_device*) ;
 int FUNC_6 (union zip_zres_s*) ;
 int FUNC_7 (struct zip_device*,int ) ;

int FUNC_8(struct zip_operation *VAR_1, struct zip_state *VAR_2,
  struct zip_device *VAR_3)
{
 union zip_inst_s *VAR_4 = &VAR_2->zip_cmd;
 union zip_zres_s *VAR_5 = &VAR_2->result;
 u32 VAR_6;


 FUNC_2(VAR_1, VAR_2, VAR_4);

 FUNC_0(VAR_1->input_len, &VAR_3->stats.comp_in_bytes);

 VAR_6 = FUNC_5(VAR_4, VAR_3);


 FUNC_1(&VAR_3->stats.comp_req_submit);


 FUNC_6(VAR_5);


 FUNC_1(&VAR_3->stats.comp_req_complete);

 VAR_1->compcode = VAR_5->s.compcode;
 switch (VAR_1->compcode) {
 case 130:
  FUNC_3("Zip instruction not yet completed");
  return VAR_0;

 case 129:
  FUNC_3("Zip instruction completed successfully");
  FUNC_7(VAR_3, VAR_6);
  break;

 case 131:
  FUNC_3("Output Truncate error");

  return VAR_0;

 default:
  FUNC_4("Zip instruction failed. Code:%d", VAR_1->compcode);
  return VAR_0;
 }


 switch (VAR_1->format) {
 case 132:
  FUNC_3("RAW Format: %d ", VAR_1->format);

  VAR_1->csum = VAR_5->s.adler32;
  break;

 case 128:
  FUNC_3("ZLIB Format: %d ", VAR_1->format);
  VAR_1->csum = VAR_5->s.adler32;
  break;

 case 134:
  FUNC_3("GZIP Format: %d ", VAR_1->format);
  VAR_1->csum = VAR_5->s.crc32;
  break;

 case 133:
  FUNC_3("LZS Format: %d ", VAR_1->format);
  break;

 default:
  FUNC_4("Unknown Format:%d\n", VAR_1->format);
 }

 FUNC_0(VAR_5->s.totalbyteswritten,
       &VAR_3->stats.comp_out_bytes);


 if (VAR_1->output_len < VAR_5->s.totalbyteswritten) {

  FUNC_4("output_len (%d) < total bytes written(%d)\n",
   VAR_1->output_len, VAR_5->s.totalbyteswritten);
  VAR_1->output_len = 0;

 } else {
  VAR_1->output_len = VAR_5->s.totalbyteswritten;
 }

 return 0;
}
