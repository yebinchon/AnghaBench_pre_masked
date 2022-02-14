
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cper_mem_err_compact {int validation_bits; int target_id; int responder_id; int requestor_id; int bit_pos; int column; int row; int device; int bank; int rank; int module; int card; int node; } ;


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
 scalar_t__ FUNC_0 (char*,int,char*,int ) ;

__attribute__((used)) static int FUNC_1(struct cper_mem_err_compact *VAR_13, char *VAR_14)
{
 u32 VAR_15, VAR_16;

 if (!VAR_14)
  return 0;

 VAR_16 = 0;
 VAR_15 = VAR_12 - 1;
 if (VAR_13->validation_bits & VAR_6)
  VAR_16 += FUNC_0(VAR_14 + VAR_16, VAR_15 - VAR_16, "node: %d ", VAR_13->node);
 if (VAR_13->validation_bits & VAR_2)
  VAR_16 += FUNC_0(VAR_14 + VAR_16, VAR_15 - VAR_16, "card: %d ", VAR_13->card);
 if (VAR_13->validation_bits & VAR_5)
  VAR_16 += FUNC_0(VAR_14 + VAR_16, VAR_15 - VAR_16, "module: %d ", VAR_13->module);
 if (VAR_13->validation_bits & VAR_7)
  VAR_16 += FUNC_0(VAR_14 + VAR_16, VAR_15 - VAR_16, "rank: %d ", VAR_13->rank);
 if (VAR_13->validation_bits & VAR_0)
  VAR_16 += FUNC_0(VAR_14 + VAR_16, VAR_15 - VAR_16, "bank: %d ", VAR_13->bank);
 if (VAR_13->validation_bits & VAR_4)
  VAR_16 += FUNC_0(VAR_14 + VAR_16, VAR_15 - VAR_16, "device: %d ", VAR_13->device);
 if (VAR_13->validation_bits & VAR_10)
  VAR_16 += FUNC_0(VAR_14 + VAR_16, VAR_15 - VAR_16, "row: %d ", VAR_13->row);
 if (VAR_13->validation_bits & VAR_3)
  VAR_16 += FUNC_0(VAR_14 + VAR_16, VAR_15 - VAR_16, "column: %d ", VAR_13->column);
 if (VAR_13->validation_bits & VAR_1)
  VAR_16 += FUNC_0(VAR_14 + VAR_16, VAR_15 - VAR_16, "bit_position: %d ",
          VAR_13->bit_pos);
 if (VAR_13->validation_bits & VAR_8)
  VAR_16 += FUNC_0(VAR_14 + VAR_16, VAR_15 - VAR_16, "requestor_id: 0x%016llx ",
          VAR_13->requestor_id);
 if (VAR_13->validation_bits & VAR_9)
  VAR_16 += FUNC_0(VAR_14 + VAR_16, VAR_15 - VAR_16, "responder_id: 0x%016llx ",
          VAR_13->responder_id);
 if (VAR_13->validation_bits & VAR_11)
  FUNC_0(VAR_14 + VAR_16, VAR_15 - VAR_16, "target_id: 0x%016llx ",
     VAR_13->target_id);

 VAR_14[VAR_16] = '\0';
 return VAR_16;
}
