
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* module_warmup_disable; void* module_unstable_warning; void* module_tmp_size; int module_st_pass; int module_st_hash; void* module_separator; int module_salt_type; void* module_salt_min; void* module_salt_max; void* module_pw_min; void* module_pw_max; void* module_pwdump_column; void* module_potfile_keep_all_hashes; void* module_potfile_disable; void* module_potfile_custom_check; void* module_outfile_check_nocomp; void* module_outfile_check_disable; int module_opts_type; int module_opti_type; void* module_kern_type_dynamic; int module_kern_type; void* module_kernel_threads_min; void* module_kernel_threads_max; void* module_kernel_loops_min; void* module_kernel_loops_max; void* module_kernel_accel_min; void* module_kernel_accel_max; void* module_jit_cache_disable; void* module_jit_build_options; void* module_hook_size; void* module_hook_salt_size; void* module_hook23; void* module_hook12; void* module_hlfmt_disable; void* module_hashes_count_max; void* module_hashes_count_min; int module_hash_name; int module_hash_category; void* module_hash_mode; void* module_hash_init_selftest; int module_hash_encode; void* module_hash_encode_potfile; void* module_hash_encode_status; int module_hash_decode; void* module_hash_decode_zero_hash; void* module_hash_decode_potfile; void* module_hash_binary_save; void* module_hash_binary_parse; void* module_hash_binary_count; void* module_forced_outfile_format; void* module_extra_tmp_size; void* module_extra_buffer_size; int module_esalt_size; void* module_dictstat_disable; int module_dgst_size; int module_dgst_pos3; int module_dgst_pos2; int module_dgst_pos1; int module_dgst_pos0; void* module_deep_comp_kernel; void* module_build_plain_postprocess; void* module_benchmark_salt; void* module_benchmark_mask; void* module_benchmark_hook_salt; void* module_benchmark_esalt; int module_attack_exec; int module_interface_version; int module_context_size; } ;
typedef TYPE_1__ module_ctx_t ;


 int VAR_0 ;
 void* VAR_1 ;
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

void FUNC_0 (module_ctx_t *VAR_20)
{
  VAR_20->module_context_size = VAR_0;
  VAR_20->module_interface_version = VAR_2;

  VAR_20->module_attack_exec = VAR_3;
  VAR_20->module_benchmark_esalt = VAR_1;
  VAR_20->module_benchmark_hook_salt = VAR_1;
  VAR_20->module_benchmark_mask = VAR_1;
  VAR_20->module_benchmark_salt = VAR_1;
  VAR_20->module_build_plain_postprocess = VAR_1;
  VAR_20->module_deep_comp_kernel = VAR_1;
  VAR_20->module_dgst_pos0 = VAR_4;
  VAR_20->module_dgst_pos1 = VAR_5;
  VAR_20->module_dgst_pos2 = VAR_6;
  VAR_20->module_dgst_pos3 = VAR_7;
  VAR_20->module_dgst_size = VAR_8;
  VAR_20->module_dictstat_disable = VAR_1;
  VAR_20->module_esalt_size = VAR_9;
  VAR_20->module_extra_buffer_size = VAR_1;
  VAR_20->module_extra_tmp_size = VAR_1;
  VAR_20->module_forced_outfile_format = VAR_1;
  VAR_20->module_hash_binary_count = VAR_1;
  VAR_20->module_hash_binary_parse = VAR_1;
  VAR_20->module_hash_binary_save = VAR_1;
  VAR_20->module_hash_decode_potfile = VAR_1;
  VAR_20->module_hash_decode_zero_hash = VAR_1;
  VAR_20->module_hash_decode = VAR_11;
  VAR_20->module_hash_encode_status = VAR_1;
  VAR_20->module_hash_encode_potfile = VAR_1;
  VAR_20->module_hash_encode = VAR_12;
  VAR_20->module_hash_init_selftest = VAR_1;
  VAR_20->module_hash_mode = VAR_1;
  VAR_20->module_hash_category = VAR_10;
  VAR_20->module_hash_name = VAR_13;
  VAR_20->module_hashes_count_min = VAR_1;
  VAR_20->module_hashes_count_max = VAR_1;
  VAR_20->module_hlfmt_disable = VAR_1;
  VAR_20->module_hook12 = VAR_1;
  VAR_20->module_hook23 = VAR_1;
  VAR_20->module_hook_salt_size = VAR_1;
  VAR_20->module_hook_size = VAR_1;
  VAR_20->module_jit_build_options = VAR_1;
  VAR_20->module_jit_cache_disable = VAR_1;
  VAR_20->module_kernel_accel_max = VAR_1;
  VAR_20->module_kernel_accel_min = VAR_1;
  VAR_20->module_kernel_loops_max = VAR_1;
  VAR_20->module_kernel_loops_min = VAR_1;
  VAR_20->module_kernel_threads_max = VAR_1;
  VAR_20->module_kernel_threads_min = VAR_1;
  VAR_20->module_kern_type = VAR_14;
  VAR_20->module_kern_type_dynamic = VAR_1;
  VAR_20->module_opti_type = VAR_15;
  VAR_20->module_opts_type = VAR_16;
  VAR_20->module_outfile_check_disable = VAR_1;
  VAR_20->module_outfile_check_nocomp = VAR_1;
  VAR_20->module_potfile_custom_check = VAR_1;
  VAR_20->module_potfile_disable = VAR_1;
  VAR_20->module_potfile_keep_all_hashes = VAR_1;
  VAR_20->module_pwdump_column = VAR_1;
  VAR_20->module_pw_max = VAR_1;
  VAR_20->module_pw_min = VAR_1;
  VAR_20->module_salt_max = VAR_1;
  VAR_20->module_salt_min = VAR_1;
  VAR_20->module_salt_type = VAR_17;
  VAR_20->module_separator = VAR_1;
  VAR_20->module_st_hash = VAR_18;
  VAR_20->module_st_pass = VAR_19;
  VAR_20->module_tmp_size = VAR_1;
  VAR_20->module_unstable_warning = VAR_1;
  VAR_20->module_warmup_disable = VAR_1;
}
